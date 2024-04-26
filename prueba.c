#include <stdio.h>

float calcularTasa(float tasa) {
    return tasa / 100;
}

float calcularMontoMensual(float montot, int años) {
    return montot / años;
}

float calcularInteresMensual(float monto, float tasa, int añosr) {
    return (monto * añosr) * tasa;
}

float calcularCuotaMensual(float manual, float monto) {
    return (manual + monto) / 12;
}

int main() {
    float tasa, montot, manual, monto, cuota_mensual;
    int años, añosr;

    printf("Ingrese el monto a invertir: ");
    scanf("%f", &montot);

    printf("Ingrese la tasa de interes que se va a aplicar (en porcentaje): ");
    scanf("%f", &tasa);

    printf("Ingrese la cantidad de años que aplica al monto: ");
    scanf("%d", &años);

    tasa = calcularTasa(tasa);

    for (float i = 0; i < años; i++) {
        monto = calcularMontoMensual(montot, años);
        añosr = años - i;
        manual = calcularInteresMensual(monto, tasa, añosr);
        añosr = años - 1;
        cuota_mensual = calcularCuotaMensual(manual, monto);
        printf("Año\tInteres\tCuota\n");
        printf("%d\t%.2f\t%.2f\n", i, manual, cuota_mensual);
    }

    return 0;
}