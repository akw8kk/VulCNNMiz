void FUN1()
{
    char * VAR1;
    char VAR2[100];
    VAR1 = VAR2;
    if(FUN2())
    {
        
        memset(VAR1, '', 100-1); 
        VAR1[100-1] = ''; 
    }
    else
    {
        
        memset(VAR1, '', 50-1); 
        VAR1[50-1] = ''; 
    }
    {
        char VAR3[50] = "";
        
        strcpy(VAR3, VAR1);
        FUN3(VAR1);
    }
}