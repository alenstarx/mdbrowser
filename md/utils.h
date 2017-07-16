#ifndef UTILS__H
#define UTILS__H
#include <unistd.h>

#ifdef __cplusplus
extern "c" {
#endif

extern char *load_file(const char *path, size_t *data_size);
extern int save_file(const char *path, char* data, size_t size);

#ifdef __cplusplus
}
#endif
#endif // UTILS__H