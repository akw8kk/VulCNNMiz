static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(100*sizeof(char));
    memset(VAR2, '', 100-1);
    VAR2[100-1] = '';
    if(VAR3!=5)
    {
        
        FUN3("");
    }
    else
    {
        
        VAR1 = VAR2;
    }
    {
        char VAR4[100*2];
        memset(VAR4, '', 100*2-1); 
        VAR4[100*2-1] = ''; 
        
        strcpy(VAR4, VAR1);
        FUN3(VAR4);
    }
}