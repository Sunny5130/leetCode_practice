SELECT S.student_id,S.student_name,SU.subject_name,COUNT(E.student_id) attended_exams
FROM Students S CROSS JOIN Subjects SU LEFT JOIN Examinations E
on S.student_id = E.student_id and SU.subject_name = E.subject_name
group by S.student_id, S.student_name, SU.subject_name
order by S.student_id, S.student_name, SU.subject_name