static void FUN1()
{
    int VAR1,VAR2;
    char * VAR3;
    char VAR4[100] = "";
    VAR3 = VAR4;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        strcpy(VAR3, "");
    }
    for(VAR2 = 0; VAR2 < 1; VAR2++)
    {
        
        FUN2(VAR3);
    }
}