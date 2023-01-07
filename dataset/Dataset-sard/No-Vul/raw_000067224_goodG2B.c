static void FUN1()
{
    int VAR1;
    char * VAR2;
    char VAR3[100];
    VAR2 = VAR3;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        memset(VAR2, '', 50-1); 
        VAR2[50-1] = ''; 
    }
    {
        char VAR4[50] = "";
        
        strcpy(VAR4, VAR2);
        FUN2(VAR2);
    }
}