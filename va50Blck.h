#include <stdlib.h>

struct qbqetell_etnica_BLCK {
        char* strm;
        int*  vlmm;
        int*  cvrg;
        struct qbqetell_etnica_BLCK* extnBlck;
};
        int qbqetell_etnica_BLCK____intl (struct qbqetell_etnica_BLCK* sbjc, int* vlmm) {
                if (sbjc == NULL) {
                        sbjc = (struct qbqetell_etnica_BLCK*) calloc (1,
                                sizeof (struct qbqetell_etnica_BLCK));
                }
                if (vlmm == NULL || (*vlmm) < 1 || (*vlmm) > 1024) return 0;
                
                if ((*sbjc).strm != NULL) {
                        free ((*sbjc).strm);
                        (*sbjc).strm = NULL;
                }
                if ((*sbjc).vlmm != NULL) {
                        free ((*sbjc).vlmm);
                        (*sbjc).vlmm = NULL;
                }
                if ((*sbjc).cvrg != NULL) {
                        free ((*sbjc).cvrg);
                        (*sbjc).cvrg = NULL;
                }
                
                (*sbjc).strm    = (char*) calloc ((*vlmm), sizeof (char));
                (*sbjc).vlmm    = (int* ) calloc (1, sizeof (int));
                (*(*sbjc).vlmm) = (*vlmm);
                (*sbjc).cvrg    = (int* ) calloc (1, sizeof (int));
                (*(*sbjc).cvrg) = 0;
                
                return 1;
        }
        int qbqetell_etnica_BLCK____dntl (struct qbqetell_etnica_BLCK* sbjc) {
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
                return 1;
        }
