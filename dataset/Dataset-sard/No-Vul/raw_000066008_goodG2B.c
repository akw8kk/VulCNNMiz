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
        
        strncpy(VAR4, VAR2, strlen(VAR2));
        VAR4[50-1] = ''; 
        FUN2(VAR2);
    }
}