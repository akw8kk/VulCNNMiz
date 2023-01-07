void FUN1()
{
    char * VAR1;
    char * VAR2[5];
    VAR1 = NULL;
    
    VAR1 = (char *)malloc(50*sizeof(char));
    VAR1[0] = ''; 
    
    VAR2[2] = VAR1;
    FUN2(VAR2);
}