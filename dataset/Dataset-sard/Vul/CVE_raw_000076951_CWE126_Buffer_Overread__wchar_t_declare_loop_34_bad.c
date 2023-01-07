void FUN1()
{
    wchar_t * VAR1;
    CWE126_Buffer_Overread__wchar_t_declare_loop_34_unionType VAR2;
    wchar_t VAR3[50];
    wchar_t VAR4[100];
    wmemset(VAR3, VAR5'', 50-1); 
    VAR3[50-1] = VAR5''; 
    wmemset(VAR4, VAR5'', 100-1); 
    VAR4[100-1] = VAR5''; 
    
    VAR1 = VAR3;
    VAR2.VAR6 = VAR1;
    {
        wchar_t * VAR1 = VAR2.VAR7;
        {
            size_t VAR8, VAR9;
            wchar_t VAR10[100];
            wmemset(VAR10, VAR5'', 100-1);
            VAR10[100-1] = VAR5''; 
            VAR9 = wcslen(VAR10);
            
            for (VAR8 = 0; VAR8 < VAR9; VAR8++)
            {
                VAR10[VAR8] = VAR1[VAR8];
            }
            VAR10[100-1] = VAR5'';
            FUN2(VAR10);
        }
    }
}