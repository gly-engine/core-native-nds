# Core Native NDS

[<img align="right" height="168px" src="https://raw.githubusercontent.com/RodrigoDornelles/RodrigoDornelles/refs/heads/master/media/pong-gba-gly-engine.gif">](https://github.com/gamelly/gly-engine/blob/main/samples/pong/game.lua)

This project is a basic micro-gameengine to run lua in the **Nintendo DS**,
which can be expanded to a custom engine, such as [Gly Engine](https://github.com/gamelly/gly-engine) or [Love2d](https://github.com/gamelly/love-engine).

 * [online ide](https://playground.gamely.com.br)
 * [limitations](https://docs.gamely.com.br/limits#limits-in-nintendo-ds)
 * [documentation](https://docs.gamely.com.br/group__nintendo)

<br/>

## Building: [Pong](https://github.com/gamelly/gly-engine/blob/main/samples/pong/game.lua) Example with `Gly Engine`

can be used `-DENGINE=@micro`,  `-DENGINE=@lite` or `-DENGINE=@native`.

```
docker run --rm -v $(pwd):/app -w /app devkitpro/devkitarm:20240906 cmake -Bbuild -H. -DGAME=@pong
```

```
docker run --rm -v $(pwd):/app -w /app devkitpro/devkitarm:20240906 make -C build
```

## Building: [Pong](https://github.com/gamelly/love-engine/blob/main/samples/pong/main.lua) Example with `Love2D`

```
docker run --rm -v $(pwd):/app -w /app devkitpro/devkitarm:20240906  cmake -Bbuild -H. -DGAME=@love:pong -DENGINE=@love
```

```
docker run --rm -v $(pwd):/app -w /app devkitpro/devkitarm:20240906 make -C build
```

## Building: Your Own Game with a Self-Made Engine

```
docker run --rm -v $(pwd):/app -w /app devkitpro/devkitarm:20240906 cmake -Bbuild -H. -DGAME=path/game.lua -DENGINE=path/engine.lua
```

```
docker run --rm -v $(pwd):/app -w /app devkitpro/devkitarm:20240906 make -C build
```
