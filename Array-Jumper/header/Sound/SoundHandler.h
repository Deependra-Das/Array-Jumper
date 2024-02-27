#pragma once
#include "SFML/Audio.hpp"

namespace Sound
{
	enum class SoundType
	{
		BUTTON_CLICK
	};

	class SoundHandler
	{
	private:
		const int background_music_volume = 60;

		sf::Music background_music;
		sf::Sound sound_effect;
		sf::SoundBuffer buffer_button_click;

		void loadBackgroundMusicFromFile();
		void loadSoundFromFile();

	public:
		SoundHandler();

		void initialize();

		void playSound(SoundType soundType);
		void playBackgroundMusic();
	};
}
