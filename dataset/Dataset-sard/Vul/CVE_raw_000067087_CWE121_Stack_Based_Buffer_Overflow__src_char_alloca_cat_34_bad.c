void FUN1()
{
    char * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__src_char_alloca_cat_34_unionType VAR2;
    char * VAR3 = (char *)FUN2(100*sizeof(char));
    VAR1 = VAR3;
    
    memset(VAR1, '', 100-1); 
    VAR1[100-1] = ''; 
    VAR2.VAR4 = VAR1;
    {
        char * VAR1 = VAR2.VAR5;
        {
            char VAR6[50] = "";
            
            strcat(VAR6, VAR1);
            FUN3(VAR1);
        }
    }
}