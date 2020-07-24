-- 코드를 입력하세요
SELECT ins.ANIMAL_ID, ins.ANIMAL_TYPE, ins.NAME
    FROM ANIMAL_INS ins
    WHERE (ins.ANIMAL_ID, 'X', 'O') IN
        (SELECT ins.ANIMAL_ID,
                CASE WHEN ins.SEX_UPON_INTAKE LIKE 'Neutered%' THEN 'O'
                    WHEN ins.SEX_UPON_INTAKE LIKE 'Spayed%' THEN 'O'
                    ELSE 'X' 
                END "ins_check",
                CASE WHEN outs.SEX_UPON_OUTCOME LIKE 'Neutered%' THEN 'O'
                    WHEN outs.SEX_UPON_OUTCOME LIKE 'Spayed%' THEN 'O'
                    ELSE 'X' 
                END "outs_check"
            FROM ANIMAL_INS ins, ANIMAL_OUTS outs
            WHERE ins.ANIMAL_ID = outs.ANIMAL_ID
        )

-- SELECT ins.ANIMAL_ID,
--                 CASE WHEN ins.SEX_UPON_INTAKE LIKE 'Neutered%' THEN 'O'
--                     WHEN ins.SEX_UPON_INTAKE LIKE 'Spayed%' THEN 'O'
--                     ELSE 'X' 
--                 END "ins_check",
--                 CASE WHEN outs.SEX_UPON_OUTCOME LIKE 'Neutered%' THEN 'O'
--                     WHEN outs.SEX_UPON_OUTCOME LIKE 'Spayed%' THEN 'O'
--                     ELSE 'X' 
--                 END "outs_check"
--             FROM ANIMAL_INS ins, ANIMAL_OUTS outs
--             WHERE ins.ANIMAL_ID = outs.ANIMAL_ID