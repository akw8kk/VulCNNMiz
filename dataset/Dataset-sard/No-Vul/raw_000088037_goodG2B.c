static void FUN1()
{
    int VAR1;
    CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_malloc_34_unionType VAR2;
    
    VAR1 = -1;
    
    VAR1 = 100-1;
    VAR2.VAR3 = VAR1;
    {
        int VAR1 = VAR2.VAR4;
        
        if (VAR1 < 100)
        {
            
            char * VAR5 = (char *)malloc(VAR1);
            
            memset(VAR5, '', VAR1-1);
            VAR5[VAR1-1] = '';
            FUN2(VAR5);
            free(VAR5);
        }
    }
}