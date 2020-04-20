![Banner](img/banner.png?raw=true)

I can be reached on discordapp.com, username borntohonk#5901, if there are any concerns or questions that relate to licensing or legal formalities, if needed. (I do not use reddit, or any other social media.)

This is a modified Atmosphere fork nicknamed "NEUTOS", it's main purpose is to add support for a widely used homebrew named "Tinfoil" ( https://tinfoil.io ), as this kind of support is not native to Atmosphere. If such support were added natively to Atmosphere, this fork will cease to be updated and be discontinued. Support is to be described as permitted to run while installed as homebrew application. Any function derived for as a "content manager" is not necessary to qualify as being supported natively. Just the abillity to be installed, and to run as a homebrew application.

One can compile and produce the resulting NEUTOS release by using the command `make neutos` when compiling.

There are third-party binaries distributed with "NEUTOS", which should not be confused with the Atmosphere project. The licenses for these binaries are included. It should be noted that none of these specifically listed binaries are licensed under gplv2 such as Atmosphere is. Binaries with origin such as "NX-Hbmenu" (hbmenu.nro), "NX-hbloader" (atmosphere/hbl.nsp). And a closed source shofel2 based "RCM payload", distributed under two names (atmosphere/reboot_payload.bin) and (payload.bin).

A python based tool ( https://gist.github.com/borntohonk/c92b20cd1ae6e405009eb52524b0b875 ) is also used to transform "Fusee-Primary" (source code here, under fusee/fusee-primary/src) into the file called "boot.dat", which is what the closed source shofel2 based "RCM payload" loads from a fixed offset after it has been transformed into boot.dat

* https://github.com/switchbrew/nx-hbloader
* https://github.com/switchbrew/nx-hbmenu
* https://github.com/fail0verflow/shofel2
-----


























=====

![License](https://img.shields.io/badge/License-GPLv2-blue.svg)

Atmosphère is a work-in-progress customized firmware for the Nintendo Switch.

Components
=====

Atmosphère consists of multiple components, each of which replaces/modifies a different component of the system:

* Fusée: First-stage Loader, responsible for loading and validating stage 2 (custom TrustZone) plus package2 (Kernel/FIRM sysmodules), and patching them as needed. This replaces all functionality normally in Package1loader/NX Bootloader.
    * Sept: Payload used to enable support for runtime key derivation on 7.0.0.
* Exosphère: Customized TrustZone, to run a customized Secure Monitor
* Thermosphère: EL2 EmuNAND support, i.e. backing up and using virtualized/redirected NAND images
* Stratosphère: Custom Sysmodule(s), both Rosalina style to extend the kernel/provide new features, and of the loader reimplementation style to hook important system actions
* Troposphère: Application-level Horizon OS patches, used to implement desirable CFW features

Licensing
=====

This software is licensed under the terms of the GPLv2, with exemptions for specific projects noted below.

You can find a copy of the license in the [LICENSE file](LICENSE).

Exemptions:
* The [yuzu Nintendo Switch emulator](https://github.com/yuzu-emu/yuzu) and the [Ryujinx Team and Contributors](https://github.com/orgs/Ryujinx) are exempt from GPLv2 licensing. They are permitted, each at their individual discretion, to instead license any source code authored for the Atmosphère project as either GPLv2 or later or the [MIT license](https://github.com/Atmosphere-NX/Atmosphere/blob/master/docs/licensing_exemptions/MIT_LICENSE). In doing so, they may alter, supplement, or entirely remove the copyright notice for each file they choose to relicense. Neither the Atmosphère project nor its individual contributors shall assert their moral rights against any of the aforementioned projects.
* [Nintendo](https://github.com/Nintendo) is exempt from GPLv2 licensing and may (at its option) instead license any source code authored for the Atmosphère project under the Zero-Clause BSD license.

Credits
=====

Atmosphère is currently being developed and maintained by __SciresM__, __TuxSH__, __hexkyz__, and __fincs__.<br>
In no particular order, we credit the following for their invaluable contributions:

* __switchbrew__ for the [libnx](https://github.com/switchbrew/libnx) project and the extensive [documentation, research and tool development](http://switchbrew.org) pertaining to the Nintendo Switch.
* __devkitPro__ for the [devkitA64](https://devkitpro.org/) toolchain and libnx support.
* __ReSwitched Team__ for additional [documentation, research and tool development](https://reswitched.team/) pertaining to the Nintendo Switch.
* __ChaN__ for the [FatFs](http://elm-chan.org/fsw/ff/00index_e.html) module.
* __Marcus Geelnard__ for the [bcl-1.2.0](https://sourceforge.net/projects/bcl/files/bcl/bcl-1.2.0) library.
* __naehrwert__ and __st4rk__ for the original [hekate](https://github.com/nwert/hekate) project and its hwinit code base.
* __CTCaer__ for the continued [hekate](https://github.com/CTCaer/hekate) project's fork and the [minerva_tc](https://github.com/CTCaer/minerva_tc) project.
* __m4xw__ for development of the [emuMMC](https://github.com/m4xw/emummc) project.
* __Riley__ for suggesting "Atmosphere" as a Horizon OS reimplementation+customization project name.
* __hedgeberg__ for research and hardware testing.
* __lioncash__ for code cleanup and general improvements.
* __jaames__ for designing and providing Atmosphère's graphical resources.
* Everyone who submitted entries for Atmosphère's [splash design contest](https://github.com/Atmosphere-NX/Atmosphere-splashes).
* _All those who actively contribute to the Atmosphère repository._
