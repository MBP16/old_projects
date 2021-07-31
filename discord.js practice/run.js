const DiscordJS = require('discord.js');
const client = new DiscordJS.Client();
const token = require("./token.json");
const guildId = '799512369305878539'
const ytdl = require('ytdl-core');

String.prototype.format = function() {
    var formatted = this;
    for( var arg in arguments ) {
        formatted = formatted.replace("{" + arg + "}", arguments[arg]);
    }
    return formatted;
};

const getApp = (guildId) => {
    const app = client.api.applications(client.user.id)
    if (guildId){
        app.guilds(guildId)
    }
    return app
}

client.on('ready', async () => {
    console.log('Ready!')
    client.user.setActivity('/명령어', { type: 'LISTENING' })
    
    const commands = await getApp(guildId).commands.get()
    console.log(commands)
    await getApp(guildId).commands.post({
        data: {
            name: 'ping',
            description: 'answer with pong',
        },
    })
    await getApp(guildId).commands.post({
        data: {
            name: 'play',
            description: 'play a song',
            options: [
                {
                    name: "song",
                    description: 'song url(youtube) or song name',
                    required: true,
                    type: 3
                }
            ]
        },
    })
    await getApp(guildId).commands.post({
        data: {
            name: 'join',
            description: 'join the voice channel'
        }
    })
    await getApp(guildId).commands.post({
        data: {
            name: 'leave',
            description: 'leave the voice channel'
        }
    })

    client.ws.on('INTERACTION_CREATE', async (interaction) => {
        const { name, options } = interaction.data
        const command = name.toLowerCase()
        const args = {}
        console.log(options)
        if (options) {
            for (const option of options){
                const {name, value} = option
                args[name] = value
            }
        }
        console.log(args)
        const guild = client.guilds.cache.get(interaction.guild_id)
        const member = guild.members.cache.get(interaction.member.user.id);
        if (command === 'ping'){
            reply(interaction, 'pong')
        } else if (command === 'play'){
            try {
                const voiceChannel = member.voice.channel;
                if (voiceChannel) {
                    try {
                        voiceChannel.join()
                        reply(interaction, "``{0}`` 를 재생합니다".format(args['song']))
                    } catch (e) {
                        reply(interaction, "``{0}`` 를 재생합니다".format(args['song']))
                    }
                }
            } catch (e) {
                reply(interaction, "음성 채널에 입장 후 명령해주십시오")
            }
        } else if (command === 'join'){
            const voiceChannel = member.voice.channel;
            if (voiceChannel){
                voiceChannel.join()
                    .then(connection => {
                        reply(interaction, '음성 채널에 입장합니다')
                    })
            } else {
                reply(interaction, '음성 채널에 입장 후 명령해주십시오')
            }
        } else if (command === 'leave'){
            const voiceChannel = member.voice.channel;
            if (voiceChannel){
                voiceChannel.leave()
                reply(interaction, '음성채널을 떠났습니다')
            } else {
                reply(interaction, '음성 채널에 입장 후 명령해주십시오')
            }
        }
    })
})

const reply = (interaction, response) => {
    client.api.interactions(interaction.id, interaction.token).callback.post({
        data: {
            type: 4,
            data: {
                content: response,
            },
        },
    })
}

client.login(token.TOKEN);