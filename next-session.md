# Next session — nn-inkay

Updated 2026-09-24.

Wii U loader plugin (Aroma): Pretendo's Inkay with every `*.pretendo.cc`
swapped for a same-length `*.openpak.org` and the OpenPak Network CA, so a
modded console goes to OpenPak. Released and current — the only open thing
is hardware.

Current status 2026-09-24: latest OpenPak tag still `openpak-v0.2.0`
(23b207c; `v3.0.0` is upstream's). Since then only CI (release now triggers
on `v*.*.*` tags, not `openpak-v*`) and docs commits.

## Where things stand

- Last release `openpak-v0.2.0` (2026-09-10); no code since, only CI + docs.
  The next release needs a `v*.*.*` tag (d33e32e) — it must not collide with
  upstream's `v2.x`/`v3.0.0` tags already in the repo.
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
- 2026-09-15 docs pass committed: `CHANGELOG.md` (generated; `git log`
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

## Scratch (research and throwaway work)

Decompiles, Ghidra projects, dumps, exefs/romfs extracts, packet captures,
strace and emulator logs, probe harnesses: put them in
`~/REPOS/Openpak/scratch/<topic>`. That folder is a local mount of the media pool,
outside every repository, so nothing in it is committed. Never use `/tmp` (a
shared 15 GB RAM disk) or elsewhere on `/home` for this. Keys and signing
material never go there. Rule: `docs/playbooks/conventions.md` in the workspace.
