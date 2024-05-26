# Design Pattern - Singleton pattern

## Description

![singleton](https://github.com/jiji-thecat/dp-singleton/assets/104809324/419866cc-6248-459c-bf29-80fb15a957b9)

The Singleton pattern is a design pattern used to ensure that only one instance of a class can be created.

### Class Diagram

![class diagram](https://github.com/jiji-thecat/dp-singleton/assets/104809324/ea021393-4c09-4b4f-a591-1bad4530d7f9)

[wiki](https://ja.wikipedia.org/wiki/Singleton_%E3%83%91%E3%82%BF%E3%83%BC%E3%83%B3)

There are three key points from this diagram:

1. The class instance is declared as a private class variable.
2. The constructor is declared as private.
3. The `getInstance()` method is declared to return the class instance created in step #1.

## How to Install and Run

Import this project as a QT project.

## How to Use This App

![singleton](https://github.com/jiji-thecat/dp-singleton/assets/104809324/419866cc-6248-459c-bf29-80fb15a957b9)

This app attempts to generate an instance of the Earth class multiple times by pressing a button. However, since the Singleton pattern is used, it will only generate one instance. To prove this, the memory address of the instance is displayed, and it remains the same for all attempts.

## License

**MIT License**

Copyright © 2024 jiji

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation, the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

\*\*THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
