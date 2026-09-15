# Next session — nn-inkay

Updated 2026-09-15.

Wii U loader plugin (Aroma): Pretendo's Inkay with every `*.pretendo.cc`
swapped for a same-length `*.openpak.org` and the OpenPak Network CA, so a
modded console goes to OpenPak. Released and current — the only open thing
is hardware.

## Where things stand

- HEAD = `openpak-v0.2.0` (2026-09-10); 12 tags; nothing unreleased.
- The four OpenPak commits, in order:
  1. `5c753b7` openpak.org names + OpenPak CA + `openpak-v*` release builds
  2. `1bca437` `NETWORK_BASEURL` is openpak.org too
  3. `9d1cfdd` the module file is `Inkay-openpak.wms`
  4. `23b207c` the module resolves every `*.openpak.org` name to the OpenPak
     box itself (`common/inkay_config.h`, override `-DOPENPAK_SERVER_IP`) —
     no DNS setup, no public DNS record
- Server side (`nn-account`, `nn-friends`, `nn-nncs`, `nn-boss`,
  `nn-juxtaposition`, `nn-soap`) deployed 2026-09-10 and answers both the
  Nintendo names and the openpak.org names.
- Never run on hardware; every green Wii U PRD row is inference until one
  does (WU-0).
- Untracked (2026-09-15 docs pass): `CHANGELOG.md` (generated; `git log`
  canonical), `docs/`, `prds/` stubs.

## Next steps

1. WU-0 hardware pass: copy `Inkay-openpak.wms` to
   `sd:/wiiu/environments/aroma/modules/`, boot, sign in — C1 first, then
   the rest of the parity list.
2. If a name fails to resolve, check `OPENPAK_SERVER_IP` points at the prod
   box before touching anything else.
3. Aroma on autoboot/coldboot only (upstream requirement — SpotPass breaks
   otherwise).

## Pointers

- README (OpenPak header: install, Docker/system build)
- ../prds/platform-wiiu-prd.md — §4 console side, §5 WU-0
- ../nn-account ../nn-friends (what it talks to); ../nn-sssl +
  ../nn-sssl-dns (the hackless alternative for the same console)
