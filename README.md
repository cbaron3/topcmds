<!--
*** Thanks for checking out this README Template. If you have a suggestion that would
*** make this better, please fork the repo and create a pull request or simply open
*** an issue with the tag "enhancement".
*** Thanks again! Now go create something AMAZING! :D
***
***
***
*** To avoid retyping too much info. Do a search and replace for the following:
*** cbaron3, topcmds
-->





<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]



<!-- PROJECT LOGO -->
<br />
<p align="center">
  <h1 align="center">topcmds</h3>

  <p align="center">
    Simple CLI built to list out the Top 100 most useful commands in Linux-based operating systems.
    <br />
    <a href="https://github.com/cbaron3/topcmds"><strong>Explore the docs »</strong></a>
    <br />
    <br />
    <a href="https://github.com/cbaron3/topcmds">View Demo</a>
    ·
    <a href="https://github.com/cbaron3/topcmds/issues">Report Bug</a>
    ·
    <a href="https://github.com/cbaron3/topcmds/issues">Request Feature</a>
  </p>
</p>



<!-- TABLE OF CONTENTS -->
## Table of Contents

* [About the Project](#about-the-project)
  * [Built With](#built-with)
* [Getting Started](#getting-started)
  * [Prerequisites](#prerequisites)
  * [Installation](#installation)
* [Usage](#usage)
* [Roadmap](#roadmap)
* [Contributing](#contributing)
* [License](#license)
* [Contact](#contact)



<!-- ABOUT THE PROJECT -->
## About The Project

This project is simple. After invoking the executable from the command line, 100 of the most useful commands will be listed out in the terminal for your reference. Commands can also be filtered based on category (second column) using command line arguments. 

[![Product Name Screen Shot][product-screenshot]](https://github.com/cbaron3/topcmds)

### Built With

* [C++](https://isocpp.org/)
* [CLI11](https://github.com/CLIUtils/CLI11)
* [termcolor](https://github.com/ikalnytskyi/termcolor)


<!-- GETTING STARTED -->
## Getting Started

To get a local copy up and running follow these simple steps.

### Prerequisites

This is a list things you need to use to run topcmds.

* cmake
```sh
sudo apt install cmake
```

### Installation

1. Clone the repo
```sh
git clone https://github.com/cbaron3/topcmds.git
```
2. Build the executable
```sh
mkdir build
cd build
cmake ..
make
```
3. Run topcmds
```sh
./topcmds --all
```

4. [Optional] Add the executable to bin

```sh
chmod +x topcmds
sudo cp /path/to/executable/topcmds /bin
```



<!-- USAGE EXAMPLES -->
## Usage

Usage instructions are found by running

```sh
topcmds --help
```

OR

```sh
topcmds -h
```

[![Usage Screen Shot][usage-screenshot]]

<!-- ROADMAP -->
## Roadmap

See the [open issues](https://github.com/cbaron3/topcmds/issues) for a list of proposed features (and known issues).



<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to be learn, inspire, and create. Any contributions you make are **greatly appreciated**.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request



<!-- LICENSE -->
## License

Distributed under the GNU License. See `LICENSE` for more information.



<!-- CONTACT -->
## Contact

Carl Baron - carbaro196@gmail.com

Project Link: [https://github.com/cbaron3/topcmds](https://github.com/cbaron3/topcmds)

<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/cbaron3/topcmds.svg?style=flat-square
[contributors-url]: https://github.com/cbaron3/topcmds/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/cbaron3/topcmds.svg?style=flat-square
[forks-url]: https://github.com/cbaron3/topcmds/network/members
[stars-shield]: https://img.shields.io/github/stars/cbaron3/topcmds.svg?style=flat-square
[stars-url]: https://github.com/cbaron3/topcmds/stargazers
[issues-shield]: https://img.shields.io/github/issues/cbaron3/topcmds.svg?style=flat-square
[issues-url]: https://github.com/cbaron3/topcmds/issues
[license-shield]: https://img.shields.io/github/license/cbaron3/topcmds.svg?style=flat-square
[license-url]: https://github.com/cbaron3/topcmds/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=flat-square&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/carl-baron3
[product-screenshot]: screenshot.png
[usage-screenshot]: usage.png
