void FUN1()
{
    char * VAR1;
    char VAR2[100];
    memset(VAR2, '', 100-1);
    VAR2[100-1] = '';
    while(1)
    {
        
        VAR1 = VAR2 - 8;
        break;
    }
    {
        char VAR3[100*2];
        memset(VAR3, '', 100*2-1); 
        VAR3[100*2-1] = ''; 
        
        strcpy(VAR3, VAR1);
        FUN2(VAR3);
    }
}