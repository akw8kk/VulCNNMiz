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
        {
            char VAR5[100] = "";
            
            FUN2(VAR5, 100-1, VAR3);
            FUN3(VAR5);
        }
    }
}