/*
       hd11_BLCK
*/

#include <stdlib.h>

struct hd11_BLCK {
        char*                 strm;
        int*                  vlmm;
        int*                  cvrg;
        struct hd11_BLCK* extnBlck;
};
        void hd11_BLCK____intl (struct hd11_BLCK* sbjc, int* vlmm) {
                if (sbjc == NULL) {
                        sbjc = (struct hd11_BLCK*) calloc (1, sizeof (struct hd11_BLCK));
                }
                if ((*vlmm) < 1 || (*vlmm) > 1024) return;
                
                if ((*sbjc).strm     != NULL) {
                        free ((*sbjc).strm);
                        (*sbjc).strm = NULL;
                }
                if ((*sbjc).vlmm     != NULL) {
                        free ((*sbjc).vlmm);
                        (*sbjc).vlmm = NULL;
                }
                if ((*sbjc).cvrg     != NULL) {
                        free ((*sbjc).cvrg);
                        (*sbjc).cvrg = NULL;
                }
                
                (*sbjc).strm    = (char*) calloc ((*vlmm), sizeof (char));
                (*sbjc).vlmm    = (int* ) calloc (1, sizeof (int));
                (*(*sbjc).vlmm) = (*vlmm);
                (*sbjc).cvrg    = (int* ) calloc (1, sizeof (int));
                (*(*sbjc).cvrg) = 0;
                
                return;
        }
        void hd11_BLCK____dntl (struct hd11_BLCK* sbjc) {
                if ((*sbjc).strm     != NULL) {
                        free ((*sbjc).strm);
                        (*sbjc).strm = NULL;
                }
                if ((*sbjc).vlmm     != NULL) {
                        free ((*sbjc).vlmm);
                        (*sbjc).vlmm = NULL;
                }
                if ((*sbjc).cvrg     != NULL) {
                        free ((*sbjc).cvrg);
                        (*sbjc).cvrg = NULL;
                }
                if ((*sbjc).extnBlck != NULL) (*sbjc).extnBlck = NULL;
        }
