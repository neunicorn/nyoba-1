#include<stdio.h>

void barang(){
    menu:;
            int mineral_water=0,
            jus=0,
            ice_tea=0,
            cappuchino=0,
            vietnam_drip=0;
                /*food*/
            int spaghetti=0, pizza=0, nasi_goreng=0, mi_goreng=0, bakso=0;
            int x;
            int hasil=0, kembalian, jumlah;
            char ch;

            printf("\n=================PAYMENT=================\n");
            printf("DRINK\t\t\tFOOD\n");
            printf("1. Cappuchino\t\t6.  Bakso\n");
            printf("2. Ice Tea\t\t7.  Nasi Goreng\n");
            printf("3. Jus\t\t\t8.  Mi Goreng\n");
            printf("4. Mineral Water\t9.  Pizza\n");
            printf("5. Vietnam Drip\t\t10. Spaghetti\n");
            printf("=========================================");
            printf("\n0.  Total\t\t99. POS Menu\n");
            for(;;){
                /*Beli*/
                printf("\nInput code barang: ");
                input:;
                scanf("%d", &x);
                if(x == 1){
                    printf("Cappuchino: ");
                    scanf("%d", &x);
                    cappuchino= 27000;
                    cappuchino=cappuchino*x;
                    printf("Cappuchino= %d\n", cappuchino);

                }
                else if(x == 2){
                    printf("Ice Tea: ");
                    scanf("%d", &x);
                    ice_tea=10000;
                    ice_tea=ice_tea*x;
                    printf("Ice Tea= %d\n", ice_tea);

                }
                else if(x == 3){
                    printf("Jus: ");
                    scanf("%d", &x);
                    jus=15000;
                    jus=jus*x;
                    printf("Jus= %d\n", jus);
                }
                else if(x == 4){
                    printf("Mineral Water: ");
                    scanf("%d", &x);
                    mineral_water=6000;
                    mineral_water=mineral_water*x;
                    printf("Mineral water= %d\n", mineral_water);
                }
                else if(x == 5){
                    printf("Vietnam Drip: ");
                    scanf("%d", &x);
                    vietnam_drip=22000;
                    vietnam_drip=vietnam_drip*x;
                    printf("Vietnam Drip= %d\n", vietnam_drip);
                }
                else if(x == 6){
                    printf("bakso: ");
                    scanf("%d", &x);
                    bakso=25000;
                    bakso=bakso*x;
                    printf("Bakso= %d\n", bakso);
                }
                else if(x == 7){
                    printf("Nasi Goreng: ");
                    scanf("%d", &x);
                    nasi_goreng=28000;
                    nasi_goreng=nasi_goreng*x;
                    printf("Nasi Goreng= %d\n", nasi_goreng);
                }
                else if(x == 8){
                    printf("Mi Goreng: ");
                    scanf("%d", &x);
                    mi_goreng=22000;
                    mi_goreng=mi_goreng*x;
                    printf("Mi Goreng= %d\n", mi_goreng);
                }
                else if(x == 9){
                    printf("Pizza: ");
                    scanf("%d", &x);
                    pizza=45000;
                    pizza=pizza*x;
                    printf("Pizza= %d\n", pizza);
                }
                else if(x == 10){
                    printf("Spaghetti: ");
                    scanf("%d", &x);
                    spaghetti=25000;
                    spaghetti=spaghetti*x;
                    printf("Spaghetti= %d\n", spaghetti);
                }
                else if(x == 0){

                    printf("SubTotal: %d\n", hasil);
                    break;
                }
                else if (x == 99){
                    system("cls");
                    run();
                }
                else{
                    printf("code not found");
                }
                jumlah = cappuchino+ice_tea+jus+mineral_water+vietnam_drip+bakso+nasi_goreng+mi_goreng+pizza+spaghetti;
                hasil+=jumlah;
                jumlah = 0;
            }
            /*Bayar*/
            if(hasil > 0){
                printf("Masukan uang bayar: ");
                scanf("%d", &x);
                kembalian=x-hasil;
                printf("Uang kembalian= %d", kembalian);
                printf("\n");
                printf("mau ngitung lagi? (y/t)\n");
                printf("Select: ");
                scanf(" %c", &ch);
                if (ch == 'y'){
                    system("cls");
                    goto menu;
                }
                else {
                system("pause");
                system("cls");
                run();
            }
            }else{
                printf("Code Does nit=exitst");
                system("cls");
                goto menu;
            }


}

void run(){
        /*Deklarasi*/
    int select;

    /*Proses*/
    awal:
    printf("=========PAYMENT OF SALES MENU=========\n");

    printf("1. Payment\n");
    printf("2. Income\n");
    printf("3. Payment History\n");
    printf("4. Exit\n");
    printf("Select: ");
    scanf("%d", &select);
    system("cls");

    switch(select)
    {
        case 1:{barang(); break;}
        case 2:
            printf("=====INCOME=====\n");
            system("pause");
            system("cls");
            goto awal;
            break;
        case 3:
            printf("=====PAYMENT HISTORY=====\n");
            system("pause");
            system("cls");
            goto awal;
            break;

        case 4:
            system("exit");
            break;

        default:
            printf("Code do not exist\n");
            system("pause");
            system("cls");
            goto awal;



    }
}

int main()
{
    run();
    return 0;
}
