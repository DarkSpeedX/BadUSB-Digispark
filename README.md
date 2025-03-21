# 🚀 Digispark ATtiny85 USB Serial Number Extractor

🔍 Overview
This project uses a Digispark ATtiny85 board to extract a laptop's serial number when plugged in. The extracted information is then sent to a Telegram bot for remote access.

⚙️ Steps to Set Up
🛒 1. Purchase the ATtiny85 Board
Buy a Digispark ATtiny85 board to get started.

🖨️ 2. 3D Print the Casing
Print a custom case for the ATtiny85 using Thingiverse or Printables.
I used this design from a creator called CMR:
🔗 https://www.printables.com/model/509019-digispark-attiny85-enclosure-bad-usb-stick-fake-me/comments

❗ Note: The original design does not include a USB cap. I created a custom cap, which I attached it in my repository. I printed it in PLA, but PETG works too for the cap!

🔧 3. Set Up the Board in Arduino IDE
To configure the ATtiny85 board, follow this YouTube tutorial from the channel The Electronic Guy, which worked perfectly for me:
📺 YouTube: https://www.youtube.com/watch?v=JGf6P52LO5c

📝 4. Upload the Script
I have created a custom script that:
✅ Extracts the laptop’s serial number when the ATtiny85 is plugged in.
✅ Sends the serial number to a Telegram bot.

📂 The script is included in this repository.
✏️ Modify the script by replacing the Telegram API token and Chat ID with your own.



🤖 Setting Up the Telegram Bot
🔑 1. Get the API Token
1️⃣ Open Telegram and search for @BotFather.
2️⃣ Type /start and send.
3️⃣ Type /newbot and follow the instructions to create your bot.
4️⃣ Once created, @BotFather will send you an API Token. Save this token!

🆔 2. Get the Chat ID
1️⃣ Search for @Raw_Info_Bot in Telegram.
2️⃣ Type /start and send.
3️⃣ The bot will return your Chat ID.

🛠️ 3. Configure the Script
✍️ Edit the script and insert:
🔹 Your Telegram Bot API Token
🔹 Your Chat ID

💡 You can modify the script to perform different actions based on your needs.

🚀 Now you're all set! Plug in your Digispark ATtiny85 and retrieve laptop serial numbers remotely via Telegram! 💻📩


⚠️ Disclaimer
🔴 This project is strictly for educational and cybersecurity awareness purposes only.
❌ Unauthorized access to devices or data is illegal.
✅ Use this responsibly and only on devices you own or have permission to test.
