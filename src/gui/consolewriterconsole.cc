/** @file
 ConsoleWriterConsole - class handling console output by sending it to STDOUT
 @author Martin Petricek
*/

#include "consolewriterconsole.h"
#include "util.h"
#include <qstring.h>
#include <assert.h>
#include <iostream>

namespace gui {

using namespace std;

/**
 Default constructor of ConsoleWriter
*/
ConsoleWriterConsole::ConsoleWriterConsole() : ConsoleWriter() {
 //no extra initialization
}

/** default destructor */
ConsoleWriterConsole::~ConsoleWriterConsole() {
}

/**
 Print one line to console, followed by a newline
 @param line String to print
*/
void ConsoleWriterConsole::printLine(const QString &line) {
 cout << line << endl;
}

/**
 Print one error line to console, followed by a newline
 @param line String to print
*/
void ConsoleWriterConsole::printErrorLine(const QString &line) {
 cout << "! " << line << endl;
}

/**
 Print/echo/store command that is to be executed
 @param cmd Command string
*/
void ConsoleWriterConsole::printCommand(const QString &cmd) {
 cout << "> " << cmd << endl;
}


} // namespace gui