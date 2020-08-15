#include "libmx.h"
int mx_sqrt(int x) {
        int res = 0;
        if (x < 0)
                return 0;
        if (x == 1)
        	return 1;

        for (res = 0; res < x; res++) {
                if (res * res ==x) {
                       return res;
                }
        }
return 0;
}
