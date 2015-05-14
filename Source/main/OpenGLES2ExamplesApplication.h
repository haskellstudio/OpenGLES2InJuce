/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#include "JuceHeader.h"

#include "MainWindow.h"
#include "ContentComponent.h"

//==============================================================================
class OpenGLES2ExamplesApplication  : public JUCEApplication
{
public:
    //==============================================================================
    OpenGLES2ExamplesApplication();
    ~OpenGLES2ExamplesApplication();

    static ContentComponent* getContentComponent();

    //==============================================================================
    void initialise (const String& commandLine);
    void shutdown();

    //==============================================================================
    void systemRequestedQuit();

    //==============================================================================
    const String getApplicationName();
    const String getApplicationVersion();
    bool moreThanOneInstanceAllowed();
    void anotherInstanceStarted (const String& commandLine);

private:
    static ScopedPointer<MainWindow> mainWindow;
};
