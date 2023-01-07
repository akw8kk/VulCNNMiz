static void FUN1()
{
    int VAR1;
    CWE195_Signed_to_Unsigned_Conversion_Error__listen_socket_memcpy_34_unionType VAR2;
    
    VAR1 = -1;
    
    VAR1 = 100-1;
    VAR2.VAR3 = VAR1;
    {
        int VAR1 = VAR2.VAR4;
        {
            char VAR5[100];
            char VAR6[100] = "";
            memset(VAR5, '', 100-1);
            VAR5[100-1] = '';
            if (VAR1 < 100)
            {
                
                memcpy(VAR6, VAR5, VAR1);
                VAR6[VAR1] = ''; 
            }
            FUN2(VAR6);
        }
    }
}