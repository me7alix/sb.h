#define SB_IMPLEMENTATION
#include "sb.h"

int main(void) {
	StringBuilder sb = {0};

	sb_append_char(&sb, 'w');
	sb_append_char(&sb, 'a');
	sb_append_char(&sb, 't');

	sb_append_str(&sb, "!\n");
	sb_append_strf(&sb, "%d + %d = %d\n", 2, 2, 4);

	printf("%s", sb_to_str(sb));

	sb_destroy(&sb);
	return 0;
}
