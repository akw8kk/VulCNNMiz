static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2(100*sizeof(char));
    memset(VAR2, '', 100-1);
    VAR2[100-1] = '';
    if(5!=5)
    {
        
        FUN3("");
    }
    else
    {
        
        VAR1 = VAR2;
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