static void FUN1()
{
    wchar_t * VAR1;
    CWE121_Stack_Based_Buffer_Overflow__CWE193_wchar_t_declare_loop_34_unionType VAR2;
    wchar_t VAR3[10];
    wchar_t VAR4[10+1];
    
    VAR1 = VAR4;
    VAR1[0] = VAR5''; 
    VAR2.VAR6 = VAR1;
    {
        wchar_t * VAR1 = VAR2.VAR7;
        {
            wchar_t VAR8[10+1] = VAR9;
            size_t VAR10, VAR11;
            VAR11 = wcslen(VAR8);
            
            
            for (VAR10 = 0; VAR10 < VAR11 + 1; VAR10++)
            {
                VAR1[VAR10] = VAR8[VAR10];
            }
            FUN2(VAR1);
        }
    }
}