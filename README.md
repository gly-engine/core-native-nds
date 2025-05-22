# Core Native NDS

[<img align="right" height="168px" src="https://raw.githubusercontent.com/RodrigoDornelles/RodrigoDornelles/refs/heads/master/media/pong-gba-gly-engine.gif">](https://gly-engine.itch.io/pong)

This project is a basic micro-gameengine to run lua in the **Nintendo DS**,
which can be expanded to a custom engine, such as [Gly Engine](https://github.com/gly-engine/gly-engine) or [Love2d](https://github.com/gly-engine/love-engine).

 * [online ide](https://playground.gamely.com.br)
 * [limitations](https://docs.gamely.com.br/limits#limits-in-nintendo-ds)
 * [documentation](https://docs.gamely.com.br/nintendo#nds)

<br/>

## Building: [Pong](https://github.com/gly-engine/gly-engine/blob/main/samples/pong/game.lua) Example with `Gly Engine`

```sql
cmake -Bbuild -H. -DGAME=@pong
```

```sql
make -C build
```

## Building: [Pong](https://github.com/gly-engine/love-engine/blob/main/samples/pong/main.lua) Example with `Love2D`

```sql
cmake -Bbuild -H. -DGAME=@love:pong -DENGINE=@love
```

```sql
make -C build
```

## Building: Your Own Game with a Self-Made Engine

```sql
cmake -Bbuild -H. -DGAME=path/game.lua -DENGINE=path/engine.lua
```

```sql
make -C build
```

---

:whale: use **devkitpro/devkitarm:20240906** docker [image](https://hub.docker.com/r/devkitpro/devkitarm) if you do not have [devkitpro](https://devkitpro.org/wiki/devkitPro_pacman) installed.
