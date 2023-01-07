static void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2((10)*sizeof(char));
    char * VAR3 = (char *)FUN2((10+1)*sizeof(char));
    if(5!=5)
    {
        
        FUN3("");
    }
    else
    {
        
        VAR1 = VAR3;
        VAR1[0] = ''; 
    }
    {
        char VAR4[10+1] = VAR5;
        
        
        memcpy(VAR1, VAR4, (strlen(VAR4) + 1) * sizeof(char));
        FUN3(VAR1);
    }
}