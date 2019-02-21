//
// 2019-02-18. Author F. Bertrand <fbertran@math.unistra.fr>
// Copyright (c) Universite de Strasbourg and CNRS
//

#ifndef SRC_NETWORK_RANDOM_R_H
#define SRC_NETWORK_RANDOM_R_H

#include "network.h"

Network* initNetwork(int number_of_nodes);

void run(int *n, double *pclust_coef, int *array);

#endif //SRC_NETWORK_RANDOM_R_H
