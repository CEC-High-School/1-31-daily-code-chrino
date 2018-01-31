#include <allegro5/allegro.h>
#include <allegro5\allegro_primitives.h> //helper library

int main() {
	al_init();
	al_init_primitives_addon(); //initialize helper library

	ALLEGRO_DISPLAY *display = al_create_display(500, 500);

	al_clear_to_color(al_map_rgb(255, 255, 255));

	al_draw_rectangle(70, 70, 250, 150, al_map_rgb(50, 50, 50), 5); // provide top left and bottom right corner

	al_draw_circle(250, 150, 50, al_map_rgb(50, 50, 50), 5);

	al_draw_circle(70, 150, 50, al_map_rgb(50, 50, 50), 5);

	al_draw_circle(250, 150, 25, al_map_rgb(50, 50, 50), 5);

	al_draw_circle(70, 150, 25, al_map_rgb(50, 50, 50), 5);

	al_flip_display();

	al_rest(30);

	al_destroy_display(display);
}