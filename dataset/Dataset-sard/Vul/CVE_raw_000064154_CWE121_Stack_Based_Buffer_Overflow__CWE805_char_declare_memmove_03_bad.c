void FUN1()
{
    char * VAR1;
    char VAR2[50];
    char VAR3[100];
    if(5==5)
    {
        
        VAR1 = VAR2;
        VAR1[0] = ''; 
    }
    {
        char VAR4[100];
        memset(VAR4, '', 100-1); 
        VAR4[100-1] = ''; 
        
        memmove(VAR1, VAR4, 100*sizeof(char));
        VAR1[100-1] = ''; 
        FUN2(VAR1);
    }
}