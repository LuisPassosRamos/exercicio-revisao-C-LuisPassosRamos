    #include <stdio.h>
    #include <stdlib.h>

        void main()
        {
            float fc(float f)
            {
                return (f - 32.0) * (5.0 / 9.0);
            }

            float f;
            printf("Digite o valor de Fahrenheit. \n");
            scanf("%f", &f);

        printf("O valor de %.1f em Celsius é igual a: %.1f. \n", f, fc(f));
    }