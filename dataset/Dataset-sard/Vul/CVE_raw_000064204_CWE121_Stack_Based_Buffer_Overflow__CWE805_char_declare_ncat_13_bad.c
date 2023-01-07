void FUN1()
{
    char * VAR1;
    char VAR2[50];
    char VAR3[100];
    if(VAR4==5)
    {
        
        VAR1 = VAR2;
        VAR1[0] = ''; 
    }
    {
        char VAR5[100];
        memset(VAR5, '', 100-1); 
        VAR5[100-1] = ''; 
        
        strncat(VAR1, VAR5, 100);
        FUN2(VAR1);
    }
}