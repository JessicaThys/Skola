int main()
{
    int inkomst = 1;
    int inkomstTioMil = 1000000000;
    int antalDagar = 0;
    int totalSumma = 0;

    while (inkomst < inkomstTioMil)
    {
        totalSumma += inkomst;
        inkomst *= 2;
        antalDagar++;
    }
    printf("Antal dagar som kravs for att na 10000000 kr: %d dagar.", antalDagar);
    return 0;
}