void FUN1()
{
    char * VAR1;
    char * VAR2 = (char *)FUN2((10)*sizeof(char));
    char * VAR3 = (char *)FUN2((10+1)*sizeof(char));
    goto VAR4;
VAR4:
    
    VAR1 = VAR2;
    VAR1[0] = ''; 
    {
        char VAR4[10+1] = VAR5;
        
        
        memcpy(VAR1, VAR4, (strlen(VAR4) + 1) * sizeof(char));
        FUN3(VAR1);
    }
}