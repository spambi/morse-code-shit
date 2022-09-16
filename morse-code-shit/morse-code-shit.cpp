#include <windows.h>
#include <mmsystem.h>
#include <iostream>
#include <ctime>
#pragma comment(lib, "winmm.lib")
#include "morse_code_addons.h"

int main()
{
	std::string lmao = "abc";
	std::vector<char> lol = splitString(lmao);
	// For testing splitString
	/*for (auto i : lol)
		std::cout << i << ' ';*/

	HWAVEOUT hWaveOut = 0;
	WAVEFORMATEX wfx = { WAVE_FORMAT_PCM, 1, 80000, 8000, 1, 8, 0 };
	waveOutOpen(&hWaveOut, WAVE_MAPPER, &wfx, 0, 0, CALLBACK_NULL);
	char buffer[8000 * 60] = {};
	// See http://goo.gl/hQdTi
	

	WAVEHDR header = { buffer, sizeof(buffer), 0, 0, 0, 0, 0, 0 };
	waveOutPrepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutWrite(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutUnprepareHeader(hWaveOut, &header, sizeof(WAVEHDR));
	waveOutClose(hWaveOut);
	Sleep(60 * 1000);
}