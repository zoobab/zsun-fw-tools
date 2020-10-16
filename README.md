[![noswpatv3](http://zoobab.wdfiles.com/local--files/start/noupcv3.jpg)](https://ffii.org/donate-now-to-save-europe-from-software-patents-says-ffii/)
zsun-fw-tools
=============

[Read more here.](https://wiki.hackerspace.pl/projects:zsun-wifi-card-reader:factory-update)

Building
--------

*NOTE:* Builder depends on `md5sum` and `tar`

1. Copy your `openwrt-ar71xx-generic-zsun-sdreader-kernel.bin` and
   `openwrt-ar71xx-generic-zsun-sdreader-rootfs-squash.bin` to `data/` folder
2. Run `./makefirmware`

Flashing
--------

*NOTE:* Flasher depends on `smbclient` and `curl`

*NOTE:* Update package is rebuilt on every flash, if you don't like this
behaviour, comment out `. ./makefirmware` file and change `UPDATEFILE` variable

*NOTE:* This is not really idiotproof

1. Run `./flashfirmware`
2. ...
3. PROFIT!
