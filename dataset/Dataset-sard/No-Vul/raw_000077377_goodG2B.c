static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(100*sizeof(char));
    memset(VAR2, '', 100-1);
    VAR2[100-1] = '';
    while(1)
    {
        
        VAR1 = VAR2;
        break;
    }
    {
        char VAR3[100];
        memset(VAR3, '', 100-1); 
        VAR3[100-1] = ''; 
        
        memmove(VAR3, VAR1, 100*sizeof(char));
        
        VAR3[100-1] = '';
        FUN3(VAR3);
    }
}