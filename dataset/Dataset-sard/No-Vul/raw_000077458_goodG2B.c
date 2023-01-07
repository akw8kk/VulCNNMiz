static void FUN1()
{
    int VAR1;
    char * VAR2;
    char VAR3[100];
    memset(VAR3, '', 100-1);
    VAR3[100-1] = '';
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = VAR3;
    }
    {
        char VAR4[100*2];
        memset(VAR4, '', 100*2-1); 
        VAR4[100*2-1] = ''; 
        
        strcpy(VAR4, VAR2);
        FUN2(VAR4);
    }
}