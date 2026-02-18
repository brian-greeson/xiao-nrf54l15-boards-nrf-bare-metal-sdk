# xiao-nrf54l15-boards-nrf-bare-metal-sdk

Board target package for **Seeed XIAO nRF54L15** in a **bare-metal + S115 SoftDevice** configuration for the **nRF Connect Bare Metal SDK**.

This repository currently provides one board target:

- `bm_xiao_softdevice/nrf54l15/cpuapp/s115_softdevice`

## Compatibility

- Tested with **nRF Connect Bare Metal SDK v1.0**

## What this repo contains

- Board target definition files under `boards/seeed/bm_xiao_softdevice/`
- DTS, pinctrl, and connector mappings for XIAO nRF54L15
- Board-specific init hook (`board_late_init_hook`) enabling `VREG_MAIN`
- Runner integration for `openocd`, `nrfutil`, `nrfjprog`, and `jlink`
- Sysbuild configuration selecting `SOFTDEVICE_S115` for this board variant

## Setup and use

### Option 1: Copy the boards folder into your project

1. Clone this repository.
2. Copy the `boards/` folder from this repository into the **root of your Bare Metal SDK project**.
3. In your IDE (or build system), create a new build configuration.
4. Select `bm_xiao_softdevice` as the board target.

### Option 2: Use VS Code board roots setting

1. Clone this repository.
2. Open VS Code settings (`settings.json`) for your workspace.
3. Add this repository path (or its `boards` subfolder) to `nrf-connect.boardRoots`.

Example:

```json
{
  "nrf-connect.boardRoots": [
    "/path/to/xiao-nrf54l15-boards-nrf-bare-metal-sdk"
  ]
}
```

You can also point directly to:

```json
{
  "nrf-connect.boardRoots": [
    "/path/to/xiao-nrf54l15-boards-nrf-bare-metal-sdk/boards"
  ]
}
```

4. Create a new build configuration and select `bm_xiao_softdevice` as the board target.

## Board highlights

- SoC/cluster: `nrf54l15/cpuapp`
- SoftDevice variant: `s115_softdevice`
- Console UART: `uart20` at `115200`
- XIAO connector aliases:
  - `xiao_i2c` -> `i2c22`
  - `xiao_spi` -> `spi00`
  - `xiao_serial` -> `uart21`
  - `xiao_adc` -> `adc`
- Onboard peripherals enabled in DTS:
  - `led0` (active low)
  - `sw0` user button
  - IMU on `i2c30` (`lsm6ds3tr-c@0x6a`)
  - `ieee802154`, `radio`, `pdm20`, `nfct`, `temp`, SAADC channels

## Memory layout (board variant)

From board DTS/YAML:

- App flash (`slot0`): `1408 KiB` at `0x00000000`
- Storage partition: `8 KiB` at `0x00160000`
- SoftDevice partition: `107 KiB` at `0x00162000`
- App RAM: `238 KiB` (`app_ram`)

## Repository layout

```text
boards/seeed/bm_xiao_softdevice/
  board.yml
  board.cmake
  Kconfig*
  sysbuild.cmake
  pre_dt_board.cmake
  bm_xiao_softdevice*_*.dts*
  include/board-config.h
  support/openocd.cfg
```
