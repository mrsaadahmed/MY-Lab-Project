# Project Scope
- Text-based horror adventure game set in a renowned historical location in Pakistan.
- Color-coded text hints to guide players: red for actions to avoid, green for recommended actions, yellow for miscellaneous tips with rewards, and gray for standard text.
- ASCII-based rendering of images to enhance visual storytelling.
- Diverse paths and choices, allowing players to explore multiple narrative routes.
- Items to be discovered through investigation, essential for game progression.
- Encounters with enemies that can be defeated using collected items.
- Comprehensive inventory management, enabling players to gather useful in-game items and score-based items for high score calculations.

**Storyline: The Whispers of Mohatta**

**Genre:** Text-based Historical Horror Adventure

**Setting:** The imposing Mohatta Palace in Karachi, Pakistan, during a stormy night. 

**Story:**

You, a local artist captivated by Mohatta Palace's rich history, are granted a special permit to explore the museum after closing hours.  Legends whisper of a hidden room within the palace walls, said to hold forgotten artifacts and secrets of its past residents.  Armed with a borrowed lantern and a sketchpad, you delve into the dimly lit halls adorned with intricate carvings.  However, as the storm rages outside, the shadows within the palace take on menacing forms. Eerie whispers fill the air, and whispers morph into chilling wails. 

**Gameplay:**

The game retains the color-coded text for enhanced atmosphere:

* **Red:** Denotes danger, warnings, or negative outcomes.
* **Green:** Highlights safe options, solutions, or beneficial information.
* **Yellow:** Indicates optional paths, potential rewards, or intriguing discoveries.
* **Gray:** Represents normal text for descriptions and narration.

**Improved Features:**

* **Richer ASCII Art:**  Use detailed ASCII art to depict specific areas within Mohatta Palace, like the grand staircase with its intricate railings or the pink Jodhpur stone facade, adding visual recognition. 
* **Interactive Environment:**  Allow the player to interact with specific elements within the museum. Examining a faded inscription on a wall painting (green text) might reveal a hidden passage, while disturbing a flock of nesting pigeons (red text) could alert unseen guardians. 
* **Context-Sensitive Inventory:**  Collected items should have specific uses tied to the environment.  For example, a  "dusty map fragment" (found by investigating a discarded chest) might require combining it with another fragment (found elsewhere) to unlock a hidden chamber (yellow text with reward). 
* **Score System:**  Expand the scoring system beyond defeating enemies. Award points for solving puzzles, uncovering historical details about the palace and its residents, and making strategic choices that minimize risk. Players can compete for high scores on leaderboards.

**Example Scene:**

**Gray Text:**

The storm howls outside, its fury echoing through the cavernous halls of Mohatta Palace.  You stand before a majestic oil painting depicting a bygone era. A faint inscription seems to be etched on its frame. 

**Yellow Text:**

The inscription appears to be a cryptic map fragment. (Examine inscription?)

**Green Text:**

You notice a faint creaking sound coming from a nearby doorway. Perhaps it leads to another chamber? (Investigate doorway?)

**Red Text:**

A sudden gust of wind slams a heavy door shut, plunging you into darkness.  A chilling whisper seems to emanate from the shadows behind you. 

This improved version utilizes Mohatta Palace as the setting, incorporating elements of its history and architecture.  The interactive environment and context-sensitive inventory create more engaging gameplay. The expanded scoring system adds a competitive edge, encouraging players to explore and learn about the palace's rich history. 
#



Generate Text-To-Speach (TTS) for the game

Command:
tts --text "text goes here" --model_name tts_models/multilingual/multi-dataset/xtts_v2 --vocoder_name tts_models/multilingual/multi-dataset/xtts_v2 --speaker_idx "Kumar Dahl" --language_idx en --out_path output/KumarDahl.wav




As the chilling wails echo through the palace, you clutch your lantern, its light flickering nervously. The storm outside intensifies, casting ominous shadows across the ancient walls.

Ahead, a hallway stretches into darkness, its end obscured by a swaying velvet curtain. You stand at a crossroads, faced with two choices:

Choice 1: Investigate the Ancient Tome

Intrigued by the cryptic tome in the alcove, you decide to delve deeper into its mysteries. You carefully examine the weathered pages, trying to decipher the strange sketches and writings. Perhaps this tome holds clues to the hidden room and its secrets.

Choice 2: Proceed Beyond the Velvet Curtain

Steeling your nerves, you decide to push forward into the unknown. You approach the velvet curtain, determined to uncover the truth behind the whispers and explore the depths of Mohatta Palace despite the growing sense of dread.
As thunder rumbles outside, you weigh your options carefully, knowing that your decision could lead to discovery or danger. The ancient palace holds its secrets close, and the storm's fury mirrors the uncertainty of what lies ahead. With your lantern guiding the way, you take a deep breath and prepare to face the next chapter of your adventure...

Outcome for Choice 2: Proceed Beyond the Velvet Curtain (leading to death)

Ignoring the ominous warnings echoing in your mind, you push aside the velvet curtain and step into the darkness beyond. The air grows heavy with an unnatural chill, sending shivers down your spine. As you move deeper into the unknown corridor, a faint whispering voice beckons you forward.

Suddenly, the ground beneath your feet gives way with a deafening crack. You plummet into a hidden trap, landing hard on unforgiving stone. Pain shoots through your body as you struggle to regain your bearings. Above you, the velvet curtain falls back into place, sealing you in darkness.

With your lantern shattered and no way to climb out, despair sets in. The chilling wails grow louder, mingling with your own frantic cries for help. As consciousness fades, you realize too late the perilous fate that awaited those who dared to trespass beyond the velvet curtain.

The secrets of Mohatta Palace claim another victim, their mysteries buried with your untimely demise...
