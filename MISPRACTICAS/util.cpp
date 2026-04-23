#include "util.h"

bool esPosible(T1* pedidos, T1 n, T1 camiones, T1 cap) {
    T1 camionesUsados = 1;
    T1 sumaActual = 0;
    for (T1 i = 0; i < n; i++) {
        if (pedidos[i] > cap) return false;
        if (sumaActual + pedidos[i] > cap) {
            camionesUsados++;
            sumaActual = pedidos[i];
            if (camionesUsados > camiones) return false;
        } else {
            sumaActual += pedidos[i];
        }
    }
    return true;
}

T1 repartirPedidos(T1* pedidos, T1 n, T1 maxCamiones) {
    T1 low = 1, high = 0;
    for (T1 i = 0; i < n; i++) high += pedidos[i];
    T1 resultado = high;
    while (low <= high) {
        T1 mid = low + (high - low) / 2;
        if (esPosible(pedidos, n, maxCamiones, mid)) {
            resultado = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return resultado;
}