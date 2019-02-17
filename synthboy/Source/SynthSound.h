/*
  ==============================================================================

    SynthSound.h
    Created: 16 Feb 2019 6:40:30pm
    Author:  Arya Daroui

  ==============================================================================
*/

#pragma once
#include "../JuceLibraryCode/JuceHeader.h"

class SynthSound : public SynthesiserSound
{
public:
	bool appliesToNote(int midiNoteNumber)
	{
		return true;
	}
	
	bool appliesToChannel(int midiChannel)
	{
		return true;
	}
};
