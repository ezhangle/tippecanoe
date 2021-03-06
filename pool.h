struct pool_val {
	char *s;
	int type;
	int n;

	struct pool_val *left;
	struct pool_val *right;

	struct pool_val *next;
};

struct pool {
	struct pool_val *vals;

	struct pool_val *head;
	struct pool_val *tail;
	int n;
};


struct pool_val *pool(struct pool *p, char *s, int type);
void pool_free(struct pool *p);
void pool_free_strings(struct pool *p);
void pool_init(struct pool *p, int n);
int is_pooled(struct pool *p, char *s, int type);
