## Added Functionality in this Fork

This version of the Godot Spine module allows:

### 1. Adding normal Godot nodes (Node2Ds) as children of Spine Slots.

Example:
```
	var sprite = Sprite.new()
	sprite.rotation_degrees = 45
	sprite.position.y = 90
	sprite.texture = load("res://machine_gun.png")	
	$Spine.add_node_to_slot("left-hand", sprite)
```
The added node will respect the slot's draw order and the parent bone's transform.
This allows children Godot nodes to appear between the Spine character's body parts.

### 2. Programmatically manipulating slot nodes.

The Spine instance will have children nodes named after Spine slots which can be manipulated.

Examples:
```
	# make face red
	$Spine.get_node("head").self_modulate = Color(1.0, 0, 0)
  
	# make right arm and hand appear above environment
	$Spine.get_node("right-arm").z_index = 1000
	$Spine.get_node("right-hand").z_index = 1000
```

## Original README Below

This module adds [Spine](http://esotericsoftware.com/) animation support for godot game engine 3.0. It has been tested with Godot 3.0.2, but may contain bugs.
The 2.1 module is also avaiable in the [2.1 branch](https://github.com/GodotExplorer/spine/tree/2.1)

Current Spine runtime version for master branch **3.6.52.1** ([Github link](https://github.com/EsotericSoftware/spine-runtimes/tree/spine-libgdx-3.6.52.1)).
Current Spine runtime version for 2.1 branch **3.5.51**.

## About the license

This module is forked from [sanikoyes's godot branch](https://github.com/sanikoyes/godot/tree/develop/modules/spine) and some of the code is forked from [godot-spine-module](https://github.com/jjay/godot-spine-module). Both of the code are declared as MIT license.

The license of this module is under the [Spine Runtimes Software License](https://github.com/EsotericSoftware/spine-runtimes/blob/3.6/LICENSE).

## Usage

Add this code under `modules/spine` in your Godot source tree. You may either copy it or use `git submodule add`.

Build Godot using `scons platform=x11 tools=yes target=release_debug` or whatever [build options](http://docs.godotengine.org/en/latest/development/compiling/) you prefer.

Use the `Spine` type in your scene tree and load your animation into it as a resource.

## Further reference

The [Spine API Reference](http://esotericsoftware.com/spine-api-reference) is useful to learning more about how the code works.

